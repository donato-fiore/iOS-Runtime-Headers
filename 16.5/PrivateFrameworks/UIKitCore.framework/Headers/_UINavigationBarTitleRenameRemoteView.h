// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARTITLERENAMEREMOTEVIEW_H
#define _UINAVIGATIONBARTITLERENAMEREMOTEVIEW_H

@class NSString;
@protocol _UINavigationBarTitleRenamerContentView;


#import "UIView.h"
#import "_UIPortalView.h"
#import "_UINavigationBarTitleRenamerRemoteSession.h"

@interface _UINavigationBarTitleRenameRemoteView : UIView <_UINavigationBarTitleRenamerContentView>

 {
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalTextInset; // ivar: _horizontalTextInset
@property (copy, nonatomic) id *horizontalTextInsetDidChangeCallback; // ivar: _horizontalTextInsetDidChangeCallback
@property (nonatomic) CGSize intrinsicContentSize; // ivar: _intrinsicContentSize
@property (retain, nonatomic) _UIPortalView *portalView; // ivar: _portalView
@property (readonly, nonatomic) _UINavigationBarTitleRenamerRemoteSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment


-(id)initWithSession:(id)arg0 ;
-(void)_connect;
-(void)_disconnect;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsMetricsUpdate;
-(void)updateMetrics;
-(void)updateMetricsIfNeeded;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif