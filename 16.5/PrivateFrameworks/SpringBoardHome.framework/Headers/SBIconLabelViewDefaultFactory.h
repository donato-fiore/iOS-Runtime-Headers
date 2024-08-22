// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONLABELVIEWDEFAULTFACTORY_H
#define SBICONLABELVIEWDEFAULTFACTORY_H

@class NSString;
@protocol SBIconLabelViewFactory, SBUILegibilityEngine;

#import <Foundation/Foundation.h>


@interface SBIconLabelViewDefaultFactory : NSObject <SBIconLabelViewFactory>

 {
    id<SBUILegibilityEngine> *_engine;
    NSString *_factoryIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)canUseIconLabelView:(id)arg0 toDisplayLabelWithSettings:(id)arg1 imageParameters:(id)arg2 forIconView:(id)arg3 ;
-(BOOL)canUseIconSimpleLabelViewToDisplayLabelWithSettings:(id)arg0 imageParameters:(id)arg1 forIconView:(id)arg2 ;
-(id)iconLabelViewWithSettings:(id)arg0 imageParameters:(id)arg1 forIconView:(id)arg2 ;
-(id)initWithFactoryIdentifier:(id)arg0 ;
-(void)prewarmForSettings:(id)arg0 maxSize:(struct CGSize )arg1 minSize:(struct CGSize )arg2 scale:(CGFloat)arg3 ;


@end


#endif