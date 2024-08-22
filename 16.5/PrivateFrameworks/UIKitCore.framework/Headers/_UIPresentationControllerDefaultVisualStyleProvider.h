// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPRESENTATIONCONTROLLERDEFAULTVISUALSTYLEPROVIDER_H
#define _UIPRESENTATIONCONTROLLERDEFAULTVISUALSTYLEPROVIDER_H

@class NSString, NSMutableDictionary;
@protocol _UIPresentationControllerVisualStyleProviding;

#import <Foundation/Foundation.h>

#import "_UISheetPresentationMetrics.h"
#import "_UIPresentationControllerNullVisualStyleProvider.h"

@interface _UIPresentationControllerDefaultVisualStyleProvider : NSObject <_UIPresentationControllerVisualStyleProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UISheetPresentationMetrics *defaultSheetMetrics;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIPresentationControllerNullVisualStyleProvider *fallbackProvider; // ivar: _fallbackProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *providerByIdiom; // ivar: _providerByIdiom
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSInteger)defaultConcretePresentationStyleForViewController:(id)arg0 ;
-(NSInteger)defaultConcreteTransitionStyleForViewController:(id)arg0 ;
-(id)_init;
-(id)_providerForIdiom:(NSInteger)arg0 ;
-(id)_providerForPresentationController:(id)arg0 ;
-(id)_providerForViewController:(id)arg0 ;
-(id)defaultStyleForPresentationController:(id)arg0 ;
-(id)styleForAlertPresentationController:(id)arg0 ;
-(id)styleForPopoverPresentationController:(id)arg0 ;
-(id)styleForRootPresentationController:(id)arg0 ;
-(id)styleForSearchPresentationController:(id)arg0 ;
-(id)styleForSheetPresentationController:(id)arg0 ;
-(void)registerVisualStyleProvider:(id)arg0 forIdiom:(NSInteger)arg1 ;


@end


#endif