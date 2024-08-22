// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKTINTLAYER_H
#define TSKTINTLAYER_H

@class CAReplicatorLayer, CALayer;



@interface TSKTintLayer : CAReplicatorLayer

@property (retain, nonatomic) CALayer *contentsLayer; // ivar: _contentsLayer
@property *CGColor tintColor;


-(id)contents;
-(void)dealloc;
-(void)layoutSublayers;
-(void)setContents:(id)arg0 ;
-(void)setNeedsDisplay;


@end


#endif