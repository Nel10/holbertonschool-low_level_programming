#include "holberton.h"
#include <stdlib.h>

/**
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strDup;

	  int i;

	    unsigned j;



	      if (!s1 && !s2)

		          return (NULL);

	        i = 0;

		  while(s1[i] != '\0')

			      i++;

		    strDup = malloc(sizeof(char) * (i + n + 1));

		      if (strDup == NULL)

			      		return (NULL);

		      	i = j = 0;

			  while (s1[i] != '\0')

				  	{

								strDup[i] = s1[i];

										i++;

											}

			  	while (j < n && s2[j] != '\0')

						{

									strDup[i] = s2[j];

											i++, j++;

												}

					strDup[i] = '\0';

						return (strDup);
}
