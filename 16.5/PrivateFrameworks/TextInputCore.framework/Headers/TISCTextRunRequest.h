// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TISCTEXTRUNREQUEST_H
#define TISCTEXTRUNREQUEST_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TISCTextRunRequest : NSObject {
    NSArray *_strings;
    *CGColor _color;
    CGFloat _maxFontSize;
    CGFloat _minFontSize;
    BOOL _allowTruncation;
    NSString *_truncationSentinel;
    NSUInteger _widthGroup;
}




+(id)textRunRequestWithStrings:(id)arg0 color:(struct CGColor *)arg1 maxFontSize:(CGFloat)arg2 minFontSize:(CGFloat)arg3 allowTruncation:(BOOL)arg4 truncationSentinel:(id)arg5 widthGroup:(NSUInteger)arg6 ;
-(BOOL)allowTruncation;
-(CGFloat)maxFontSize;
-(CGFloat)minFontSize;
-(NSUInteger)widthGroup;
-(id)strings;
-(id)truncationSentinel;
-(struct CGColor *)color;
-(void)dealloc;


@end


#endif