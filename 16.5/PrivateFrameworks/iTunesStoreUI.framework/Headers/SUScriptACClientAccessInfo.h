// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTACCLIENTACCESSINFO_H
#define SUSCRIPTACCLIENTACCESSINFO_H

@class NSMutableDictionary, NSDictionary, NSString;


#import "SUScriptObject.h"
#import "SUScriptAppleAccountType.h"

@interface SUScriptACClientAccessInfo : SUScriptObject {
    SUScriptAppleAccountType *_accountType;
    NSMutableDictionary *_dictionary;
}


@property (readonly) NSDictionary *accessInfoDictionary;
@property (readonly) NSString *accessKeyFacebookAppID;
@property (readonly) NSString *accessKeyFacebookPermissions;
@property (readonly) NSString *accessKeyPurposeStatement;
@property (retain) SUScriptAppleAccountType *accountType;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)init;
-(id)scriptAttributeKeys;
-(id)valueForAccessKey:(id)arg0 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forAccessKey:(id)arg1 ;


@end


#endif