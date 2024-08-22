// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUJSONSCANNER_H
#define SFUJSONSCANNER_H

@class NSString, NSCharacterSet;

#import <Foundation/Foundation.h>


@interface SFUJsonScanner : NSObject {
    NSString *mString;
    *unsigned short mCharacters;
    NSUInteger mLength;
    NSUInteger mOffset;
    NSCharacterSet *mWhitespaceCharacterSet;
    NSCharacterSet *mDecimalDigitCharacterSet;
}




-(BOOL)parseConstantString:(char *)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)parseArrayWithMaxDepth:(int)arg0 ;
-(id)parseDictionaryWithMaxDepth:(int)arg0 ;
-(id)parseFalse;
-(id)parseHexCharacter;
-(id)parseNull;
-(id)parseNumber;
-(id)parseObjectWithMaxDepth:(int)arg0 ;
-(id)parseString;
-(id)parseTrue;
-(unsigned short)nextCharacter;
-(void)appendCharactersInRange:(struct _NSRange )arg0 toString:(id)arg1 ;
-(void)dealloc;
-(void)skipWhitespace;


@end


#endif