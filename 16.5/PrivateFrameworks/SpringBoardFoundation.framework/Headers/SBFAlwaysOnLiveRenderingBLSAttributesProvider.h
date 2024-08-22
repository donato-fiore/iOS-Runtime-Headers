// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFALWAYSONLIVERENDERINGBLSATTRIBUTESPROVIDER_H
#define SBFALWAYSONLIVERENDERINGBLSATTRIBUTESPROVIDER_H

@class NSString;
@protocol SBFAlwaysOnLiveRenderingBLSAttributesProvider;

#import <Foundation/Foundation.h>


@interface SBFAlwaysOnLiveRenderingBLSAttributesProvider : NSObject <SBFAlwaysOnLiveRenderingBLSAttributesProvider>

 {
    id<SBFAlwaysOnLiveRenderingBLSAttributesProvider> *_provider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assertionAttributes;
-(id)initWithFBSScene:(id)arg0 ;
-(id)initWithProvider:(id)arg0 ;
-(id)initWithUIScene:(id)arg0 ;


@end


#endif