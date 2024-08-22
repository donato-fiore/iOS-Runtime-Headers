// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLJSONOBJECT_H
#define RWIPROTOCOLJSONOBJECT_H


#import <Foundation/Foundation.h>


@interface RWIProtocolJSONObject : NSObject {
    RefPtr<WTF::JSONImpl::Object, WTF::RawPtrTraits<WTF::JSONImpl::Object>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Object>> _object;
}




-(BOOL)boolForKey:(id)arg0 ;
-(CGFloat)doubleForKey:(id)arg0 ;
-(id)init;
-(id)initWithJSONObject:(*void)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)stringForKey:(id)arg0 ;
-(int)integerForKey:(id)arg0 ;
-(struct Ref<WTF::JSONImpl::Object, WTF::RawPtrTraits<WTF::JSONImpl::Object>> )toJSONObject;
-(struct RefPtr<WTF::JSONImpl::Array, WTF::RawPtrTraits<WTF::JSONImpl::Array>, WTF::DefaultRefDerefTraits<WTF::JSONImpl::Array>> )JSONArrayForKey:(id)arg0 ;
-(void)removeKey:(id)arg0 ;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setInteger:(int)arg0 forKey:(id)arg1 ;
-(void)setJSONArray:(*void)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;


@end


#endif