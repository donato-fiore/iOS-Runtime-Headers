// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICALENDARVIEWDECORATION_H
#define UICALENDARVIEWDECORATION_H

@protocol _UICalendarViewDecorationProviding;

#import <Foundation/Foundation.h>

#import "_UICalendarViewDecoration.h"
#import "UIView.h"

@interface UICalendarViewDecoration : NSObject <_UICalendarViewDecorationProviding>

 {
    _UICalendarViewDecoration *_decoration;
}


@property (retain, nonatomic, setter=_setDecorationView:) UIView *_decorationView;


+(CGFloat)_referenceHeightForTraitCollection:(id)arg0 ;
+(id)decorationWithColor:(id)arg0 size:(NSInteger)arg1 ;
+(id)decorationWithCustomViewProvider:(id)arg0 ;
+(id)decorationWithImage:(id)arg0 ;
+(id)decorationWithImage:(id)arg0 color:(id)arg1 size:(NSInteger)arg2 ;
-(id)_decorationViewForReuseView:(id)arg0 ;
-(id)init;
-(id)initWithCustomViewProvider:(id)arg0 ;
-(id)initWithDecoration:(id)arg0 ;
-(id)initWithImage:(id)arg0 color:(id)arg1 size:(NSInteger)arg2 ;


@end


#endif