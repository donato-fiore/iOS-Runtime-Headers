// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCCARPLAYBANNERSOURCE_H
#define NCCARPLAYBANNERSOURCE_H

@class BNBannerSource, NSPointerArray, NSString, NSTimer;
@protocol BNBannerSourceDelegate, BNPresentableObserving, BNBannerSourceProvidingPrivate;

#import <Foundation/Foundation.h>


@interface NCCarPlayBannerSource : NSObject <BNBannerSourceDelegate, BNPresentableObserving, BNBannerSourceProvidingPrivate>

 {
    BNBannerSource *_bannerSource;
    NSPointerArray *_postedPresentables;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNBannerSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger destination;
@property (retain, nonatomic, getter=_dismissTimer, setter=_setDismissTimer:) NSTimer *dismissTimer; // ivar: _dismissTimer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_replaceTimer, setter=_setReplaceTimer:) NSTimer *replaceTimer; // ivar: _replaceTimer
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(void)initialize;
-(BOOL)_isPresentableSticky:(id)arg0 ;
-(BOOL)_setSuspended:(BOOL)arg0 forReason:(id)arg1 revokingCurrent:(BOOL)arg2 ;
-(BOOL)postPresentable:(id)arg0 options:(NSUInteger)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
-(BOOL)setSuspended:(BOOL)arg0 forReason:(id)arg1 revokingCurrent:(BOOL)arg2 error:(*id)arg3 ;
-(NSUInteger)_indexOfPostedPresentable:(id)arg0 ;
-(NSUInteger)_postedPresentableCount;
-(id)_bannerSource;
-(id)_peekPostedPresentable;
-(id)_postedPresentablesWithIdentification:(id)arg0 ;
-(id)_pullPostedPresentableAtIndex:(NSUInteger)arg0 ;
-(id)keyWindowForScreen:(id)arg0 ;
-(id)layoutDescriptionWithError:(*id)arg0 ;
-(id)revokeAllPresentablesWithReason:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
-(id)revokePresentableWithIdentification:(id)arg0 reason:(id)arg1 animated:(BOOL)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(id)revokePresentableWithRequestIdentifier:(id)arg0 reason:(id)arg1 animated:(BOOL)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(void)_allPresentablesDidDisappear;
-(void)_cancelDismissTimer;
-(void)_cancelReplaceTimer;
-(void)_enqueuePostedPresentable:(id)arg0 ;
-(void)_presentableDidDisappear:(id)arg0 ;
-(void)_presentableWithIdentificationDidDisappear:(id)arg0 ;
-(void)_revokePreviouslyPostedPresentableIfPossible;
-(void)_startAnnounceDismissalTimer;
-(void)_startDismissTimer;
-(void)_startDismissTimerWithTimeInterval:(CGFloat)arg0 ;
-(void)_startReplaceTimer;
-(void)bannerSourceDidInvalidate:(id)arg0 ;
-(void)didBeginAnnounceForNotificationRequest:(id)arg0 ;
-(void)didFinishAnnounceForNotificationRequest:(id)arg0 ;
-(void)invalidate;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;


@end


#endif