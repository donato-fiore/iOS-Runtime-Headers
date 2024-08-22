// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTLOOKUPREQUEST_H
#define SUSCRIPTLOOKUPREQUEST_H

@class SSLookupRequest, NSString;


#import "SUScriptObject.h"

@interface SUScriptLookupRequest : SUScriptObject {
    SSLookupRequest *_request;
}


@property (retain) id *authenticatesIfNeeded;
@property (copy) NSString *keyProfile;
@property NSInteger localizationStyle;
@property (readonly) NSInteger localizationStyleDevice;
@property (readonly) NSInteger localizationStyleServer;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)init;
-(id)scriptAttributeKeys;
-(id)valueForRequestParameter:(id)arg0 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forRequestParameter:(id)arg1 ;
-(void)startWithLookupFunction:(id)arg0 ;


@end


#endif