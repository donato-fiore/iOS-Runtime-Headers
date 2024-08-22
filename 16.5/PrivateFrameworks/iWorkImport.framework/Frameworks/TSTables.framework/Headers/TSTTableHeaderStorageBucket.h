// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLEHEADERSTORAGEBUCKET_H
#define TSTTABLEHEADERSTORAGEBUCKET_H

@class TSPObject, TSUSparseArray;



@interface TSTTableHeaderStorageBucket : TSPObject {
    _NSRange _bounds;
}


@property (retain, nonatomic) TSUSparseArray *data; // ivar: _data
@property (nonatomic) NSUInteger styleCount; // ivar: _styleCount


-(id)initWithContext:(id)arg0 ;
-(id)packageLocator;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif