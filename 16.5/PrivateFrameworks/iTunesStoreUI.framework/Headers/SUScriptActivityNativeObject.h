// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTACTIVITYNATIVEOBJECT_H
#define SUSCRIPTACTIVITYNATIVEOBJECT_H

@class NSString;
@protocol SUActivityDelegate;


#import "SUScriptNativeObject.h"

@interface SUScriptActivityNativeObject : SUScriptNativeObject <SUActivityDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)activity:(id)arg0 canPerformWithActivityItems:(id)arg1 ;
-(void)activity:(id)arg0 prepareWithActivityItems:(id)arg1 ;
-(void)destroyNativeObject;
-(void)performActionForActivity:(id)arg0 ;
-(void)setupNativeObject;


@end


#endif