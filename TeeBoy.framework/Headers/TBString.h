//--------------------------------------------------------------------------------------------------
//
//  Copyright (c) 2010-2013 Tee-Boy
//
//  This source code and specific concepts contained herein are Confidential
//  Information and Property of Tee-Boy.
//  Distribution is prohibited without written permission of Tee-Boy.
//
//--------------------------------------------------------------------------------------------------
//
//  Tee-Boy                                http://www.tee-boy.com/
//  441 Saint Paul Avenue
//  Opelousas, LA  70570                   info@tee-boy.com
//
//--------------------------------------------------------------------------------------------------

#import <Foundation/Foundation.h>

@interface NSString (TeeBoyStringAdditions)

- (NSRange)rangeFromString:(NSString *)inString1
				  toString:(NSString *)inString2
				   options:(unsigned)inMask 
					 range:(NSRange)inSearchRange;

- (NSRange)rangeFromString:(NSString *)inString1
				  toString:(NSString *)inString2;

- (NSString *)replaceAllTextBetweenString:(NSString *)inString1 
								andString:(NSString *)inString2
						   fromDictionary:(NSDictionary *)inDict
								  options:(unsigned)inMask
									range:(NSRange)inSearchRange;

- (NSString *)replaceAllTextBetweenString:(NSString *)inString1 
								andString:(NSString *)inString2
						   fromDictionary:(NSDictionary *)inDict
								  options:(unsigned)inMask;

- (NSString *)replaceAllTextBetweenString:(NSString *)inString1 
								andString:(NSString *)inString2
						   fromDictionary:(NSDictionary *)inDict;

- (BOOL)hasCaseInsensitivePrefix:(NSString *)prefix;

- (BOOL)hasCaseInsensitiveSuffix:(NSString *)suffix;

- (BOOL)stringEndsWithString:(NSString *)s;

- (NSString *)capitalizedStringFirstWordOnly;

- (NSString *)bindString;

- (NSString *)uncapitalizedStringFirstWordOnly;

- (NSString *)stringByReplacingSpaceWithUnderscore;

- (NSString *)stringByAddingURLEscapesUsingEncoding:(CFStringEncodings)enc;

+ (NSString *)stringWithBytes:(const void *)bytes
					   length:(NSUInteger)length
					 encoding:(NSStringEncoding)encoding;

- (BOOL)stringContainsString:(NSString *)s;

- (BOOL)stringContainsCaseInsensitiveString:(NSString *)s;

- (BOOL)stringContainsCharactersFromString:(NSString *)s;

- (BOOL)stringContainsCharactersFromSet:(NSCharacterSet *)set;

//-(NSString *)stringByRemovingRichTextFromString:(NSString *)inputString

- (BOOL)stringBeginsWithTwoNumbers;

- (NSMutableArray *)splitLines;

- (NSString *)stringByRemovingWhitespace;

- (NSString *)stringByRemovingNewline;

- (NSString *)stringByRemovingWhitespaceAndNewline;

- (NSString *)stringByRemovingCharactersFromSet:(NSCharacterSet *)set;

- (NSString *)bracketedStringWithLeftBracket:(NSString *)leftBracket 
								rightBracket:(NSString *)rightBracket 
							   caseSensitive:(BOOL)caseSensitive;

- (NSString *)addSpacesToStringWithInterval:(int)interval;

- (NSString *)addSpacesToStringWithInterval:(int)interval
					   removeOldWhitespaces:(BOOL)remove;

- (NSMutableString *)convertLineBreaksToMac;

@end

@interface NSMutableString (TeeBoyMutableStringAdditions)

- (void)removeCharactersInSet:(NSCharacterSet *)set;

@end

@interface NSString (TeeBoyRelativePath)

- (NSString *)absolutePathFromBaseDirPath:(NSString *)baseDirPath;
- (NSString *)relativePathFromBaseDirPath:(NSString *)baseDirPath;

@end

@interface NSString (TeeBoyNonPrintable)

- (NSString *)stringByEscapingNonPrintableCharacters;

@end

@interface NSString (TeeBoyStringConversions)

- (NSInteger)valueOfHexString;

@end
