// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLTRANSLITERATORCANDIDATE_H
#define TLTRANSLITERATORCANDIDATE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TLTransliteratorCandidate : NSObject <NSCopying>



@property (readonly, copy) NSString *inputWord; // ivar: _inputWord
@property (readonly) BOOL isExtensionCandidate; // ivar: _isExtensionCandidate
@property (readonly) CGFloat lmScore; // ivar: _lmScore
@property (readonly) CGFloat seq2seqScore; // ivar: _seq2seqScore
@property (readonly) CGFloat totalScore; // ivar: _totalScore
@property (readonly, copy) NSString *transliteratedWord; // ivar: _transliteratedWord


+(id)createWithCompositeTransliteratorCandidate:(*void)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithInputWord:(id)arg0 transliteratedWord:(id)arg1 lmScore:(CGFloat)arg2 seq2seqScore:(CGFloat)arg3 totalScore:(CGFloat)arg4 isExtensionCandidate:(BOOL)arg5 ;


@end


#endif