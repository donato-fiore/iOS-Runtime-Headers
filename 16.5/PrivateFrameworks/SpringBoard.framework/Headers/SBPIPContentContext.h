// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPCONTENTCONTEXT_H
#define SBPIPCONTENTCONTEXT_H


#import <Foundation/Foundation.h>

#import "SBPIPContainerViewController.h"
#import "SBPictureInPictureWindow.h"
#import "SBWindowScene.h"

@interface SBPIPContentContext : NSObject

@property (readonly, nonatomic) SBPIPContainerViewController *containerViewController; // ivar: _containerViewController
@property (readonly, nonatomic) NSInteger contentZOrderPriority;
@property (retain, nonatomic) SBPictureInPictureWindow *window; // ivar: _window
@property (retain, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)debugDescription;
-(id)initWithWindowScene:(id)arg0 containerViewController:(id)arg1 ;


@end


#endif