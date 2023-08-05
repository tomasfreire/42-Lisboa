#!/bin/bash

FILE_NAME="libft.h"

if test -f "$FILE_NAME"; then
	rm $FILE_NAME
fi

echo "#ifndef LIBFT_H" >> $FILE_NAME
echo "# define LIBFT_H" >> $FILE_NAME

echo -e "\ntypedef struct\ts_list\n{\n\tvoid\t\t*content;\n\tstruct s_list\t*next;\n}\t\t\tt_list;\n" >> $FILE_NAME

echo "# include <unistd.h>" >> $FILE_NAME
echo "# include <stdlib.h>" >> $FILE_NAME
echo "# include <stddef.h>" >> $FILE_NAME
echo "# include <string.h>" >> $FILE_NAME
echo -e "# include <ctype.h>\n" >> $FILE_NAME

for FILE in ft_*.c ; do
  sed -n '/^int\|^char\|^void\|^size_t\|^t_list/p' $FILE | sed -n '/);$/p' >> $FILE_NAME; 
done

echo -e "\n#endif" >> $FILE_NAME
