//
//  FaceView.h
//  Happiness
//
//  Created by RoBeRt on 12-11-15.
//  Copyright (c) 2012年 RoBeRt. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FaceView;

@protocol FaceViewDataSource <NSObject>
- (float)smileforFaceView:(FaceView *)sender;
@end

@interface FaceView : UIView

@property (nonatomic) CGFloat scale;
@property (nonatomic, weak) IBOutlet id <FaceViewDataSource> dataSource;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;


@end
