//
//  TNChildSRightShapeView.h
//  TNTetris
//
//  Created by mac on 15/8/24.
//  Copyright (c) 2015年 tanorigin. All rights reserved.
//

#import "TNMovingView.h"

@interface TNChildSRightShapeView : TNMovingView

@property(nonatomic,strong)NSMutableArray *zeroPIRightSPixelViewArray;//最初

@property(nonatomic,strong)NSMutableArray *onePIRightSPixelViewArray;//顺时针翻转90度
 


 @end
