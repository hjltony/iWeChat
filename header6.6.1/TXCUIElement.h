//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCOutput.h"

@class CALayer, UIView;

@interface TXCUIElement : TXCOutput
{
    UIView *view;
    CALayer *layer;
    struct CGSize previousLayerSizeInPixels;
    CDStruct_1b6d18a9 time;
    double actualTimeOfLastUpdate;
}

- (void).cxx_destruct;
- (void)updateWithTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)updateUsingCurrentTime;
- (void)update;
- (struct CGSize)layerSizeInPixels;
- (id)initWithLayer:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)updateWithView:(id)arg1;
- (id)init;

@end

