// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GGLDISPLAYLINKTARGET_H
#define _GGLDISPLAYLINKTARGET_H


#import <Foundation/Foundation.h>


@interface _GGLDisplayLinkTarget : NSObject {
    ? _callbacker;
}




-(id)initWithCallbacker:(struct weak_ptr<ggl::RunLoop::_RunLoopCallbacker> )arg0 ;
-(void)displayLinkFired:(id)arg0 ;


@end


#endif