// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKTREENODEDEPRECATED_H
#define TSKTREENODEDEPRECATED_H

@class TSPObject, NSMutableArray;



@interface TSKTreeNodeDeprecated : TSPObject {
    NSMutableArray *mChildren;
    TSPObject *mObject;
}


@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) TSPObject *dataObject;


-(id)initWithContext:(id)arg0 ;
-(id)nodeAtIndex:(NSUInteger)arg0 ;
-(void)addChild:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif