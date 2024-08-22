// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTKOREANHANGULSYLLABLE_H
#define TYPISTKOREANHANGULSYLLABLE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TypistKoreanHangulSyllable : NSObject {
    NSMutableArray *jamosInSyllable;
    int _syllableStructure;
    BOOL _hasConsonantVariants;
}


@property (nonatomic) unsigned short syllable; // ivar: _syllable


+(BOOL)isKoreanSyllable:(unsigned short)arg0 ;
+(id)decomposeSyllableForScribble:(unsigned short)arg0 ;
-(BOOL)_hasConsonantVariants:(id)arg0 ;
-(BOOL)hasConsonantVariants;
-(id)initWithSyllable:(unsigned short)arg0 ;
-(id)jamos;
-(int)_determineSyllableStructure:(NSUInteger)arg0 vowelPositionType:(int)arg1 ;


@end


#endif