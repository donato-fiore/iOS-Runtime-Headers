// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTBINDERSUBSTRATE_H
#define _UICONTEXTBINDERSUBSTRATE_H

@class NSString, FBSScene;
@protocol _UIContextBinding;

#import <Foundation/Foundation.h>


@interface _UIContextBinderSubstrate : NSObject <_UIContextBinding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBSScene *scene; // ivar: _scene
@property (readonly) Class superclass;


-(id)initWithScene:(id)arg0 ;
-(void)attachContext:(id)arg0 ;
-(void)detachContext:(id)arg0 ;


@end


#endif