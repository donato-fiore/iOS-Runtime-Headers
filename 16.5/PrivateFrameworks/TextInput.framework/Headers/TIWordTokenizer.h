// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIWORDTOKENIZER_H
#define TIWORDTOKENIZER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TIWordTokenizer : NSObject {
    NSString *m_string;
    ? m_inlineBuffer;
    _NSRange m_tokenRange;
    _NSRange m_searchRange;
    NSUInteger m_bufferOffset;
}




-(id)allTokensForString:(id)arg0 ;
-(id)init;
-(struct _NSRange )advanceToNextToken;
-(struct _NSRange )rangeOfCurrentToken;
-(void)setString:(id)arg0 withSearchRange:(struct _NSRange )arg1 ;


@end


#endif