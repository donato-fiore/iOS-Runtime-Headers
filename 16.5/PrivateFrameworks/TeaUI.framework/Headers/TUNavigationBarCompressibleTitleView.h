// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUNAVIGATIONBARCOMPRESSIBLETITLEVIEW_H
#define TUNAVIGATIONBARCOMPRESSIBLETITLEVIEW_H

@class UIView<TUNavigationBarCompressible>, NSString, UILabel, UIView;
@protocol TUNavigationBarCompressible;

#import <Foundation/Foundation.h>


@interface TUNavigationBarCompressibleTitleView : NSObject <TUNavigationBarCompressible>



@property (nonatomic) CGFloat contentAlpha; // ivar: contentAlpha
@property (readonly, nonatomic) UIView<TUNavigationBarCompressible> *customTitleView; // ivar: _customTitleView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILabel *regularTitleView; // ivar: _regularTitleView
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(id)initWithCustomTitleView:(id)arg0 ;
-(id)initWithRegularTitleView:(id)arg0 ;


@end


#endif