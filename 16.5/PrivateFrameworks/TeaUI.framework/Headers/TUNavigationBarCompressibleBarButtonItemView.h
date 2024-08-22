// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUNAVIGATIONBARCOMPRESSIBLEBARBUTTONITEMVIEW_H
#define TUNAVIGATIONBARCOMPRESSIBLEBARBUTTONITEMVIEW_H

@class UIView<TUNavigationBarButtonItemCompressible>, NSString, UIView;
@protocol TUNavigationBarButtonItemCompressible;

#import <Foundation/Foundation.h>


@interface TUNavigationBarCompressibleBarButtonItemView : NSObject <TUNavigationBarButtonItemCompressible>



@property (nonatomic) CGFloat contentAlpha; // ivar: contentAlpha
@property (readonly, nonatomic) UIView<TUNavigationBarButtonItemCompressible> *customItemView; // ivar: _customItemView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *regularItemView; // ivar: _regularItemView
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(id)initWithCustomItemView:(id)arg0 ;
-(id)initWithRegularItemView:(id)arg0 ;


@end


#endif