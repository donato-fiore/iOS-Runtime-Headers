// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBJECTCOMPARISONBYTOKENS_H
#define OBJECTCOMPARISONBYTOKENS_H


#import <Foundation/Foundation.h>


@interface ObjectComparisonByTokens : NSObject

@property (nonatomic) NSUInteger diffTokensCount; // ivar: _diffTokensCount
@property (nonatomic) NSUInteger distance; // ivar: _distance
@property (retain, nonatomic) id *obj1; // ivar: _obj1
@property (retain, nonatomic) id *obj2; // ivar: _obj2
@property (retain, nonatomic) id *reference; // ivar: _reference
@property (nonatomic) NSUInteger sameTokensCount; // ivar: _sameTokensCount


+(BOOL)addComparison:(id)arg0 to:(id)arg1 ifMinOverlap:(NSUInteger)arg2 ;
-(id)description;
-(id)initWithObj1:(id)arg0 obj2:(id)arg1 reference:(id)arg2 ;
-(void)accountForadditionalLength;
-(void)incrementDistanceWith:(NSUInteger)arg0 ;
-(void)incrementTokensWith:(BOOL)arg0 ;


@end


#endif