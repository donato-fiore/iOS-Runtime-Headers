// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13TSPERSISTENCE16TSPIDENTIFIERSET_H
#define _TTC13TSPERSISTENCE16TSPIDENTIFIERSET_H


#import <Foundation/Foundation.h>


@interface _TtC13TSPersistence16TSPIdentifierSet : NSObject {
    ? identifierSet;
}


@property (nonatomic, readonly) NSInteger count;
@property (nonatomic, readonly) NSInteger hash;


-(BOOL)intersectsIndexSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)countForIdentifier:(NSInteger)arg0 default:(NSInteger)arg1 ;
-(id)formMergeWithIdentifierSet:(id)arg0 ;
-(id)init;
-(id)initFrom:(id)arg0 ;
-(id)makeMutableIdentifierSet;
-(void)enumerateIdentifiersUsingBlock:(id)arg0 ;


@end


#endif