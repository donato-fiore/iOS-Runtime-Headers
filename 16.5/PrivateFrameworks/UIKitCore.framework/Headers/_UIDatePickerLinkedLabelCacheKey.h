// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERLINKEDLABELCACHEKEY_H
#define _UIDATEPICKERLINKEDLABELCACHEKEY_H

@class NSString, UIFont;

#import <Foundation/Foundation.h>


@interface _UIDatePickerLinkedLabelCacheKey : NSObject {
    NSString *_text;
    UIFont *_font;
    CGFloat _height;
    NSUInteger _hash;
}




+(id)keyWithText:(id)arg0 font:(id)arg1 height:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithText:(id)arg0 font:(id)arg1 height:(CGFloat)arg2 ;


@end


#endif