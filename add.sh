#!/usr/bin/env bash
# One command: ./add.sh <topic-folder> <ProblemName> [extension]
# Example:    ./add.sh 03-Solve-Problems-on-Arrays KadanesAlgorithm cpp

cd "$(dirname "$0")" || exit 1   # always run from inside DSA/

TOPIC="$1"
NAME="$2"
EXT="${3:-cpp}"

if [ -z "$TOPIC" ] || [ -z "$NAME" ]; then
  echo "Usage: ./add.sh <topic-folder> <ProblemName> [ext]"
  echo "Example: ./add.sh 03-Solve-Problems-on-Arrays KadanesAlgorithm cpp"
  echo ""
  echo "Topic folders:"
  ls -d */ 2>/dev/null | grep -v '.git' | sed 's|^|  |'
  exit 1
fi

mkdir -p "$TOPIC"
FILE="$TOPIC/$NAME.$EXT"

if [ -f "$FILE" ]; then
  echo "✏️  $FILE already exists — committing & pushing..."
  git add "$FILE"
  git commit -m "$TOPIC: $NAME ($EXT)"
  git push
  echo "✅ Pushed to GitHub"
else
  cat > "$FILE" <<EOF
/* Problem: $NAME
 * Sheet:   Striver's A2Z -> $TOPIC
 * Link:    https://takeuforward.org/dsa/strivers-a2z-sheet-learn-dsa-a-to-z
 */

EOF
  echo "➕ Created $FILE — solve it, then re-run the same command to push."
fi
