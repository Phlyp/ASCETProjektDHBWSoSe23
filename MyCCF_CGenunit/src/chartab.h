#ifndef _ASD_CHARTAB_H_
#define _ASD_CHARTAB_H_


/* definition of characteristic table type: 'CharTable1_real32_20_real32_TYPE' */
struct CharTable1_real32_20_real32_TYPE {
   uint16 xSize;
   float32 xDist [20];
   float32 values [20];
};

/* definition of characteristic table type: 'CharTable1_real32_3_real32_TYPE' */
struct CharTable1_real32_3_real32_TYPE {
   uint16 xSize;
   float32 xDist [3];
   float32 values [3];
};

/* definition of characteristic table type: 'CharTable1_real32_6_real32_TYPE' */
struct CharTable1_real32_6_real32_TYPE {
   uint16 xSize;
   float32 xDist [6];
   float32 values [6];
};

/* definition of characteristic table type: 'CharTable2_real32_6_real32_6_real32_TYPE' */
struct CharTable2_real32_6_real32_6_real32_TYPE {
   uint16 xSize;
   uint16 ySize;
   float32 xDist [6];
   float32 yDist [6];
   float32 values [6 * 6];
};


#endif /* _ASD_CHARTAB_H_ */
