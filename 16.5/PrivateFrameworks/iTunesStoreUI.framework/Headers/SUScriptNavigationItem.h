// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTNAVIGATIONITEM_H
#define SUSCRIPTNAVIGATIONITEM_H

@class NSString, UINavigationItem;
@protocol SUScriptNavigationItem;


#import "SUScriptObject.h"

@interface SUScriptNavigationItem : SUScriptObject

@property (copy) NSString *backButtonTitle;
@property id *hidesBackButton;
@property (retain) NSObject<SUScriptNavigationItem> *leftItem;
@property id *leftItemsSupplementBackButton;
@property (retain) NSObject<SUScriptNavigationItem> *leftMostItem;
@property (readonly, nonatomic) UINavigationItem *nativeNavigationItem;
@property (retain) NSString *prompt;
@property (retain) NSObject<SUScriptNavigationItem> *rightItem;
@property (retain) NSString *title;
@property (retain) id *titleView;


+(id)_rootScriptObjectForObject:(id)arg0 ;
+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)_disconnectNavigationItem:(id)arg0 scriptObject:(id)arg1 ;
+(void)disconnectNavigationItem:(id)arg0 forScriptObject:(id)arg1 ;
+(void)initialize;
-(id)_className;
-(id)_copyScriptButtonForButtonItem:(id)arg0 ;
-(id)_copyScriptObjectForButtonItem:(id)arg0 ;
-(id)attributeKeys;
-(id)init;
-(id)initWithNativeNavigationItem:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)tearDownUserInterface;


@end


#endif