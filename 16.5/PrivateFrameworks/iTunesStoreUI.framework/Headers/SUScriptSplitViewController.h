// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTSPLITVIEWCONTROLLER_H
#define SUSCRIPTSPLITVIEWCONTROLLER_H

@class NSNumber, NSString;


#import "SUScriptViewController.h"

@interface SUScriptSplitViewController : SUScriptViewController

@property (retain) SUScriptViewController *firstViewController;
@property (retain) id *minimumPaneSize;
@property (retain) SUScriptViewController *secondViewController;
@property (retain) id *splitPosition;
@property (retain) id *splitShadowColor;
@property (retain) NSNumber *splitShadowOpacity;
@property (retain) NSNumber *splitShadowRadius;
@property (retain) NSString *splitType;
@property (retain) NSString *title;
@property BOOL usesSharedPlaceholder;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)_splitViewController;
-(id)attributeKeys;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;


@end


#endif