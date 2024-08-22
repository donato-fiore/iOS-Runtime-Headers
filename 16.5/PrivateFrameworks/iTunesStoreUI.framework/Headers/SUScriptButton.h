// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTBUTTON_H
#define SUSCRIPTBUTTON_H

@class WebScriptObject, NSString, UIImage;
@protocol SUScriptNavigationItem;


#import "SUScriptObject.h"
#import "SUScriptCanvasContext.h"

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem>

 {
    id *_action;
    SUScriptCanvasContext *_canvas;
    WebScriptObject *_target;
}


@property (retain) id *action;
@property (retain) SUScriptCanvasContext *canvas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL enabled;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIEdgeInsets imageEdgeInsets;
@property BOOL loading;
@property (nonatomic) BOOL shouldPerformDefaultAction; // ivar: _shouldPerformDefaultAction
@property (readonly) id *showingConfirmation;
@property (retain) NSString *style;
@property (retain) NSString *subtitle;
@property (readonly) Class superclass;
@property NSInteger tag;
@property (retain) WebScriptObject *target;
@property (retain) NSString *title;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_boxedNativeButton;
-(id)_className;
-(id)_initSUScriptButton;
-(id)_nativeButton;
-(id)_systemItemString;
-(id)attributeKeys;
-(id)buttonItem;
-(id)init;
-(id)initWithSystemItemString:(id)arg0 ;
-(id)nativeButtonOfType:(int)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;
-(void)hideConfirmationAnimated:(BOOL)arg0 ;
-(void)performActionWithArguments:(id)arg0 ;
-(void)setNativeButton:(id)arg0 ;
-(void)showConfirmationWithTitle:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif