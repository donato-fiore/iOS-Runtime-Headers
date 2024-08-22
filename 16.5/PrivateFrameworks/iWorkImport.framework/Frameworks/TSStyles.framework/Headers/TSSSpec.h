// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSSSPEC_H
#define TSSSPEC_H

@class TSKSosBase, NSString;



@interface TSSSpec : TSKSosBase

@property (readonly) NSString *operationPropertyName;


-(BOOL)canApplyOnObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnsetSpec;
-(NSUInteger)hash;
-(id)apply:(id)arg0 ;
-(id)getUnsetSpec;
-(id)initUnsetSpec;
-(id)initWithCurrentProperty:(id)arg0 ;
-(id)specWithCurrentProperty:(id)arg0 ;


@end


#endif