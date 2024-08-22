// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLJSNIL_H
#define TMLJSNIL_H


#import <Foundation/Foundation.h>


@interface TMLJSNil : NSObject {
    *OpaqueJSClass _jsClassRef;
    ? _classDefinition;
}




+(BOOL)isNil:(id)arg0 ;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)jsValueInContext:(id)arg0 ;
+(id)sharedInstance;
+(id)unwrap:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)jsValueInContext:(id)arg0 ;


@end


#endif