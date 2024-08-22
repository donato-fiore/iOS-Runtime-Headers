// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFALWAYSONLIVERENDERINGSCENEBLSATTRIBUTESPROVIDER_H
#define SBFALWAYSONLIVERENDERINGSCENEBLSATTRIBUTESPROVIDER_H

@class NSString;
@protocol SBFAlwaysOnLiveRenderingBLSAttributesProvider;

#import <Foundation/Foundation.h>


@interface SBFAlwaysOnLiveRenderingSceneBLSAttributesProvider : NSObject <SBFAlwaysOnLiveRenderingBLSAttributesProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_init;
-(id)assertionAttributes;
-(id)initWithFBSScene:(id)arg0 ;
-(id)initWithUIScene:(id)arg0 ;


@end


#endif