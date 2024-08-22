// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBFEATURE_H
#define WEBFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WebFeature : NSObject

@property (readonly, nonatomic) BOOL defaultValue; // ivar: _defaultValue
@property (readonly, copy, nonatomic) NSString *details; // ivar: _details
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *preferenceKey; // ivar: _preferenceKey
@property (readonly, nonatomic) NSUInteger status; // ivar: _status


-(id)description;
-(id)initWithKey:(id)arg0 preferenceKey:(id)arg1 name:(id)arg2 status:(NSUInteger)arg3 details:(id)arg4 defaultValue:(BOOL)arg5 hidden:(BOOL)arg6 ;
-(void)dealloc;


@end


#endif