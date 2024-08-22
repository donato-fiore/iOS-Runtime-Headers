// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTVIEWCONTROLLERNATIVEOBJECT_H
#define SUSCRIPTVIEWCONTROLLERNATIVEOBJECT_H

@class SKUIPassbookLoader, NSString;
@protocol SKUIPassbookLoaderDelegate;


#import "SUScriptNativeObject.h"

@interface SUScriptViewControllerNativeObject : SUScriptNativeObject <SKUIPassbookLoaderDelegate>

 {
    SKUIPassbookLoader *_passbookLoader;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)presentationViewControllerForPassbookLoader:(id)arg0 ;
-(void)_loadPassbookPassWithURL:(id)arg0 ;
-(void)_parentViewControllerChangeNotification:(id)arg0 ;
-(void)_reloadVisibility;
-(void)dealloc;
-(void)destroyNativeObject;
-(void)passbookLoaderDidFinish:(id)arg0 ;
-(void)setScriptObject:(id)arg0 ;
-(void)setupNativeObject;


@end


#endif