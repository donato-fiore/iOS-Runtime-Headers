// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIJSOBJECT_H
#define VUIJSOBJECT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "VUIAppContext.h"

@interface VUIJSObject : NSObject

@property (readonly, weak, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) NSMutableDictionary *managedProperties; // ivar: _managedProperties


-(id)init;
-(id)initWithAppContext:(id)arg0 ;
-(id)invokeMethod:(id)arg0 withArguments:(id)arg1 ;
-(id)jsValueForProperty:(id)arg0 ;
-(void)setJSValue:(id)arg0 forProperty:(id)arg1 ;


@end


#endif