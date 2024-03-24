/*!
\file
\brief Program header file.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>


struct String
    {
    size_t length = 0;
    char* adress = nullptr;
    };


struct Text
    {
    char* Buf = nullptr;
    long long BufSize = 0;
    int count_n = 0;
    String* str = nullptr;
    };


/*!
 * The function returns the size of the input file.
 */
long long GetFileSize(FILE* file);


/*!
 * The function replaces the newline character with a null character.
 * \param[in] BufSize - size of buffer.
 */
void replace_slash_n(char* Buf, size_t BufSize);


/*!
 * Function fills an array of pointers.
 * \param[in] Number_lines - number of lines.
 */
void Parsing_pointers(char* Buf, int Number_lines, String* text);


/*!
 * Function returns number of rows.
 */
int Number_lines(char* Buf, size_t BufSize);


/*!
 * \brief Sorting strings.
 *
 * The function, depending on the passed CompFunc function, sorts the strings either from the beginning or from the end.
 * \param[in] text_len - number of lines.
 */
void bubble_Sort(void* text1, size_t text_len, int (*CompFunc)(const void* s1, const void* s2));


/*!
 * \brief Comparing two strings.
 *
 * The function compares two strings character by character from the beginning.
 * Punctuation marks are not taken into account.
 * \param[in] s1, s2 - strings to compare.
 */
int Strcmp(const void* s1, const void* s2);


/*!
 * \brief Comparing two strings.
 *
 * The function compares two strings character by character from the end.
 * Punctuation marks are not taken into account.
 * \param[in] s1, s2 - strings to compare.
 */
int Strcmp_Reverse(const void* s1, const void* s2);


/*!
 * Function outputs sorted rows.
 * \param[in] count_n - number of lines in text.
 */
void Output(FILE* file1, String* text, int count_n);


/*!
 * Function outputs source text.
 * \param[in] BufSize - size of buffer.
 */
void OutputSourceFile(FILE* file1, char* Buf, size_t BufSize);


/*!
 * The function replaces the newline character with a null character.
 * \param[in] BufSize - size of buffer.
 */
void SwapStrings(String* a, String* b);


/*!
 * \brief Sorting strings.
 *
 * The function, depending on the passed CompFunc function, sorts the strings either from the beginning or from the end.
 * \param[in] text_len - number of lines.
 */
void qSort(void* text1, size_t left, size_t right, int (*CompFunc)(const void* s1, const void* s2));


/*!
 * The function replaces the newline character with a null character.
 * \param[in] BufSize - size of buffer.
 */
bool is_valid(char symbol);


/*!
 * The function replaces the newline character with a null character.
 * \param[in] BufSize - size of buffer.
 */
int find_valid(const String* str, int start, int delta);


/*!
 * The function replaces the newline character with a null character.
 * \param[in] BufSize - size of buffer.
 */
void OutputToCmd(String* text, int count_n);


/*!
 * The function replaces the newline character with a null character.
 * \param[in] BufSize - size of buffer.
 */
void File_input(FILE* file, Text* data);


/*!
 * The function replaces the newline character with a null character.
 * \param[in] BufSize - size of buffer.
 */
void Free(Text* data);