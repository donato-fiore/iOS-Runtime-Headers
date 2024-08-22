// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GLOBELINECONTAINERDELEGATE_H
#define GLOBELINECONTAINERDELEGATE_H

@class NSString;
@protocol VKGlobeLineContainerDelegate;

#import <Foundation/Foundation.h>


@interface GlobeLineContainerDelegate : NSObject <VKGlobeLineContainerDelegate>

 {
    *void _renderer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRenderer:(*void)arg0 ;
-(void)lineContainerNeedsDisplay:(id)arg0 ;


@end


#endif