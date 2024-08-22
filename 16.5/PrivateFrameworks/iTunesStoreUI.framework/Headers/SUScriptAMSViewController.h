// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTAMSVIEWCONTROLLER_H
#define SUSCRIPTAMSVIEWCONTROLLER_H

@class NSString;


#import "SUScriptViewController.h"
#import "SUScriptAccount.h"

@interface SUScriptAMSViewController : SUScriptViewController

@property (copy, nonatomic) NSString *DSID; // ivar: _DSID
@property (copy, nonatomic) NSString *URL; // ivar: _URL
@property (retain, nonatomic) SUScriptAccount *primaryAccount; // ivar: _primaryAccount


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithPrimaryAccount:(id)arg0 ;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;


@end


#endif