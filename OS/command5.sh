read file
echo "$file"
echo "number of characters: "
cat "$file" | wc -c
echo "number of words: "
cat "$file" | wc -w
echo "number of lines: "
cat "$file" | wc -l

