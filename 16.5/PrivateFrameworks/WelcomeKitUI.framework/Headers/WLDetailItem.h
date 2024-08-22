// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLDETAILITEM_H
#define WLDETAILITEM_H

@class NSString, UIColor;

#import <Foundation/Foundation.h>


@interface WLDetailItem : NSObject

@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (copy, nonatomic) NSString *symbol; // ivar: _symbol
@property (retain, nonatomic) UIColor *symbolTintColor; // ivar: _symbolTintColor
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)items:(id)arg0 size:(*NSUInteger)arg1 ;
-(id)initWithType:(NSInteger)arg0 count:(NSUInteger)arg1 secondaryText:(id)arg2 alternativeTextUsed:(BOOL)arg3 symbolFilled:(BOOL)arg4 symbolTintColor:(id)arg5 ;


@end


#endif