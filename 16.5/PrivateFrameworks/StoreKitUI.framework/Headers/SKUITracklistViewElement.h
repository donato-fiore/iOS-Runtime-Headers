// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITRACKLISTVIEWELEMENT_H
#define SKUITRACKLISTVIEWELEMENT_H

@class NSMutableArray, NSArray;


#import "SKUIViewElement.h"
#import "SKUIHeaderViewElement.h"

@interface SKUITracklistViewElement : SKUIViewElement {
    NSMutableArray *_sections;
    NSMutableArray *_tracks;
}


@property (readonly, nonatomic) SKUIHeaderViewElement *header;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *tracks;


-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(void)enumerateTracksUsingBlock:(id)arg0 ;


@end


#endif