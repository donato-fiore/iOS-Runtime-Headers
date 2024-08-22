// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTFACEBOOKFRIEND_H
#define SUSCRIPTFACEBOOKFRIEND_H

@class NSDictionary, NSString;


#import "SUScriptObject.h"

@interface SUScriptFacebookFriend : SUScriptObject {
    NSDictionary *_dictionary;
}


@property (readonly) NSString *identifier;
@property (readonly) NSString *name;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithFriendDictionary:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif