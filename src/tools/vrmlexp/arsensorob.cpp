/* This file is part of COVISE.

   You can use it under the terms of the GNU Lesser General Public License
   version 2.1 or later, see lgpl-2.1.txt.

 * License: LGPL 2+ */

mesh.setNumVerts(24);
mesh.setNumFaces(44);
mesh.setVert(0, size *Point3(-0.500000, -0.500000, -0.050001));
mesh.setVert(1, size *Point3(0.500000, -0.500000, -0.050001));
mesh.setVert(2, size *Point3(-0.500000, 0.500000, -0.050001));
mesh.setVert(3, size *Point3(0.500000, 0.500000, -0.050001));
mesh.setVert(4, size *Point3(-0.500000, -0.500000, 0.049999));
mesh.setVert(5, size *Point3(0.500000, -0.500000, 0.049999));
mesh.setVert(6, size *Point3(-0.500000, 0.500000, 0.049999));
mesh.setVert(7, size *Point3(0.500000, 0.500000, 0.049999));
mesh.setVert(8, size *Point3(-0.350000, -0.350000, -0.050001));
mesh.setVert(9, size *Point3(0.350000, -0.350000, -0.050001));
mesh.setVert(10, size *Point3(0.350000, -0.350000, 0.049999));
mesh.setVert(11, size *Point3(-0.350000, -0.350000, 0.049999));
mesh.setVert(12, size *Point3(0.350000, 0.350000, -0.050001));
mesh.setVert(13, size *Point3(0.350000, 0.350000, 0.049999));
mesh.setVert(14, size *Point3(-0.350000, 0.350000, -0.050001));
mesh.setVert(15, size *Point3(-0.350000, 0.350000, 0.049999));
mesh.setVert(16, size *Point3(-0.265218, 0.000428, -0.049999));
mesh.setVert(17, size *Point3(-0.113862, 0.000428, -0.049999));
mesh.setVert(18, size *Point3(-0.265218, 0.291497, -0.049999));
mesh.setVert(19, size *Point3(-0.113862, 0.291497, -0.049999));
mesh.setVert(20, size *Point3(-0.265218, 0.000428, 0.050001));
mesh.setVert(21, size *Point3(-0.113862, 0.000428, 0.050001));
mesh.setVert(22, size *Point3(-0.265218, 0.291497, 0.050001));
mesh.setVert(23, size *Point3(-0.113862, 0.291497, 0.050001));
mesh.faces[0].setVerts(0, 1, 5);
mesh.faces[0].setEdgeVisFlags(1, 1, 0);
mesh.faces[0].setSmGroup(8);
mesh.faces[1].setVerts(5, 4, 0);
mesh.faces[1].setEdgeVisFlags(1, 1, 0);
mesh.faces[1].setSmGroup(8);
mesh.faces[2].setVerts(1, 3, 7);
mesh.faces[2].setEdgeVisFlags(1, 1, 0);
mesh.faces[2].setSmGroup(10);
mesh.faces[3].setVerts(7, 5, 1);
mesh.faces[3].setEdgeVisFlags(1, 1, 0);
mesh.faces[3].setSmGroup(10);
mesh.faces[4].setVerts(3, 2, 6);
mesh.faces[4].setEdgeVisFlags(1, 1, 0);
mesh.faces[4].setSmGroup(20);
mesh.faces[5].setVerts(6, 7, 3);
mesh.faces[5].setEdgeVisFlags(1, 1, 0);
mesh.faces[5].setSmGroup(20);
mesh.faces[6].setVerts(2, 0, 4);
mesh.faces[6].setEdgeVisFlags(1, 1, 0);
mesh.faces[6].setSmGroup(40);
mesh.faces[7].setVerts(4, 6, 2);
mesh.faces[7].setEdgeVisFlags(1, 1, 0);
mesh.faces[7].setSmGroup(40);
mesh.faces[8].setVerts(11, 15, 6);
mesh.faces[8].setEdgeVisFlags(1, 0, 0);
mesh.faces[8].setSmGroup(2);
mesh.faces[9].setVerts(11, 6, 4);
mesh.faces[9].setEdgeVisFlags(0, 1, 0);
mesh.faces[9].setSmGroup(2);
mesh.faces[10].setVerts(10, 11, 4);
mesh.faces[10].setEdgeVisFlags(1, 0, 0);
mesh.faces[10].setSmGroup(2);
mesh.faces[11].setVerts(10, 4, 5);
mesh.faces[11].setEdgeVisFlags(0, 1, 0);
mesh.faces[11].setSmGroup(2);
mesh.faces[12].setVerts(10, 5, 7);
mesh.faces[12].setEdgeVisFlags(0, 1, 0);
mesh.faces[12].setSmGroup(2);
mesh.faces[13].setVerts(13, 10, 7);
mesh.faces[13].setEdgeVisFlags(1, 0, 0);
mesh.faces[13].setSmGroup(2);
mesh.faces[14].setVerts(13, 7, 6);
mesh.faces[14].setEdgeVisFlags(0, 1, 0);
mesh.faces[14].setSmGroup(2);
mesh.faces[15].setVerts(13, 6, 15);
mesh.faces[15].setEdgeVisFlags(0, 0, 1);
mesh.faces[15].setSmGroup(2);
mesh.faces[16].setVerts(12, 14, 2);
mesh.faces[16].setEdgeVisFlags(1, 0, 0);
mesh.faces[16].setSmGroup(4);
mesh.faces[17].setVerts(12, 2, 3);
mesh.faces[17].setEdgeVisFlags(0, 1, 0);
mesh.faces[17].setSmGroup(4);
mesh.faces[18].setVerts(9, 12, 3);
mesh.faces[18].setEdgeVisFlags(1, 0, 0);
mesh.faces[18].setSmGroup(4);
mesh.faces[19].setVerts(9, 3, 1);
mesh.faces[19].setEdgeVisFlags(0, 1, 0);
mesh.faces[19].setSmGroup(4);
mesh.faces[20].setVerts(8, 9, 1);
mesh.faces[20].setEdgeVisFlags(1, 0, 0);
mesh.faces[20].setSmGroup(4);
mesh.faces[21].setVerts(8, 1, 0);
mesh.faces[21].setEdgeVisFlags(0, 1, 0);
mesh.faces[21].setSmGroup(4);
mesh.faces[22].setVerts(8, 0, 2);
mesh.faces[22].setEdgeVisFlags(0, 1, 0);
mesh.faces[22].setSmGroup(4);
mesh.faces[23].setVerts(8, 2, 14);
mesh.faces[23].setEdgeVisFlags(0, 0, 1);
mesh.faces[23].setSmGroup(4);
mesh.faces[24].setVerts(12, 13, 15);
mesh.faces[24].setEdgeVisFlags(1, 1, 0);
mesh.faces[24].setSmGroup(20);
mesh.faces[25].setVerts(15, 14, 12);
mesh.faces[25].setEdgeVisFlags(1, 1, 0);
mesh.faces[25].setSmGroup(20);
mesh.faces[26].setVerts(14, 15, 11);
mesh.faces[26].setEdgeVisFlags(1, 1, 0);
mesh.faces[26].setSmGroup(40);
mesh.faces[27].setVerts(11, 8, 14);
mesh.faces[27].setEdgeVisFlags(1, 1, 0);
mesh.faces[27].setSmGroup(40);
mesh.faces[28].setVerts(9, 8, 11);
mesh.faces[28].setEdgeVisFlags(1, 1, 0);
mesh.faces[28].setSmGroup(8);
mesh.faces[29].setVerts(11, 10, 9);
mesh.faces[29].setEdgeVisFlags(1, 1, 0);
mesh.faces[29].setSmGroup(8);
mesh.faces[30].setVerts(12, 9, 10);
mesh.faces[30].setEdgeVisFlags(1, 1, 0);
mesh.faces[30].setSmGroup(10);
mesh.faces[31].setVerts(10, 13, 12);
mesh.faces[31].setEdgeVisFlags(1, 1, 0);
mesh.faces[31].setSmGroup(10);
mesh.faces[32].setVerts(16, 18, 19);
mesh.faces[32].setEdgeVisFlags(1, 1, 0);
mesh.faces[32].setSmGroup(2);
mesh.faces[33].setVerts(19, 17, 16);
mesh.faces[33].setEdgeVisFlags(1, 1, 0);
mesh.faces[33].setSmGroup(2);
mesh.faces[34].setVerts(20, 21, 23);
mesh.faces[34].setEdgeVisFlags(1, 1, 0);
mesh.faces[34].setSmGroup(4);
mesh.faces[35].setVerts(23, 22, 20);
mesh.faces[35].setEdgeVisFlags(1, 1, 0);
mesh.faces[35].setSmGroup(4);
mesh.faces[36].setVerts(16, 17, 21);
mesh.faces[36].setEdgeVisFlags(1, 1, 0);
mesh.faces[36].setSmGroup(8);
mesh.faces[37].setVerts(21, 20, 16);
mesh.faces[37].setEdgeVisFlags(1, 1, 0);
mesh.faces[37].setSmGroup(8);
mesh.faces[38].setVerts(17, 19, 23);
mesh.faces[38].setEdgeVisFlags(1, 1, 0);
mesh.faces[38].setSmGroup(10);
mesh.faces[39].setVerts(23, 21, 17);
mesh.faces[39].setEdgeVisFlags(1, 1, 0);
mesh.faces[39].setSmGroup(10);
mesh.faces[40].setVerts(19, 18, 22);
mesh.faces[40].setEdgeVisFlags(1, 1, 0);
mesh.faces[40].setSmGroup(20);
mesh.faces[41].setVerts(22, 23, 19);
mesh.faces[41].setEdgeVisFlags(1, 1, 0);
mesh.faces[41].setSmGroup(20);
mesh.faces[42].setVerts(18, 16, 20);
mesh.faces[42].setEdgeVisFlags(1, 1, 0);
mesh.faces[42].setSmGroup(40);
mesh.faces[43].setVerts(20, 22, 18);
mesh.faces[43].setEdgeVisFlags(1, 1, 0);
mesh.faces[43].setSmGroup(40);
