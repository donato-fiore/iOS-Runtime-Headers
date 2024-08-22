// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNMACARCHIVEDUILAYOUT_H
#define KNMACARCHIVEDUILAYOUT_H

@class TSPObject;


#import "KNMacUILayout.h"

@interface KNMacArchivedUILayout : TSPObject

@property (readonly, nonatomic) KNMacUILayout *uiLayout; // ivar: _uiLayout


-(id)initWithUILayout:(id)arg0 context:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif