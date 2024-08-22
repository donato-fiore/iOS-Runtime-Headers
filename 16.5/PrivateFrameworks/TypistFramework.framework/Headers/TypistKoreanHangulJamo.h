// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKOREANHANGULJAMO_H
#define TYPISTKOREANHANGULJAMO_H


#import <Foundation/Foundation.h>


@interface TypistKoreanHangulJamo : NSObject {
    unsigned short _jamo;
    int _hangulJamoPosition;
    BOOL _isConsonantVariant;
    BOOL _isVerticalVowel;
}




+(id)leadingConsonants;
+(id)trailingConsonants;
+(id)vowels;
-(BOOL)_isConsonantVariant:(unsigned short)arg0 ;
-(BOOL)_isVerticalVowel:(unsigned short)arg0 ;
-(BOOL)isConsonantVariant;
-(BOOL)isVerticalVowel;
-(id)description;
-(id)initWithJamo:(unsigned short)arg0 position:(NSUInteger)arg1 ;
-(int)_getJamoType:(unsigned short)arg0 withOrderInSyllable:(NSUInteger)arg1 ;
-(int)hangulJamoPosition;
-(unsigned short)jamo;


@end


#endif