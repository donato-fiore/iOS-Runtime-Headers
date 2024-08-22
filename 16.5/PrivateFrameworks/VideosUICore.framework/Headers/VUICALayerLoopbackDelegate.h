// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUICALAYERLOOPBACKDELEGATE_H
#define VUICALAYERLOOPBACKDELEGATE_H

@class NSString, UIView;
@protocol CALayerDelegate;

#import <Foundation/Foundation.h>


@interface VUICALayerLoopbackDelegate : NSObject <CALayerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)init:(id)arg0 ;


@end


#endif